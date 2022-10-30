#include <MIDI.h>

#define ACCESS_LED_PIN 13

void onNoteOff(byte ch, byte note, byte vel);
void onNoteOn(byte ch, byte note, byte vel);

MIDI_CREATE_DEFAULT_INSTANCE();

void setup() {
    pinMode(ACCESS_LED_PIN, OUTPUT);
    MIDI.setHandleNoteOff(onNoteOff);
    MIDI.setHandleNoteOn(onNoteOn);
    MIDI.begin(MIDI_CHANNEL_OMNI);
}

void loop() {
    if(!MIDI.read()) {
        digitalWrite(ACCESS_LED_PIN, LOW);
        return;
    }
    digitalWrite(ACCESS_LED_PIN, HIGH);
}

void onNoteOff(byte ch, byte note, byte vel) {
}

void onNoteOn(byte ch, byte note, byte vel) {
}
