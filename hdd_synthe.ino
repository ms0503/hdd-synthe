#include <MIDI.h>

void onNoteOff(byte ch, byte note, byte vel);
void onNoteOn(byte ch, byte note, byte vel);

const ACCESS_LED_PIN = 13;

MIDI_CREATE_DEFAULT_INSTANCE();

void setup() {
    pinMode(LED_PIN, OUTPUT);
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
