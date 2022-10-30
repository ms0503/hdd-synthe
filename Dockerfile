FROM ubuntu:22.04
ENV DEBIAN_FRONTEND noninteractive
RUN apt-get update && apt-get install -y curl python3
RUN mkdir -p /tool
RUN curl -fsSL https://raw.githubusercontent.com/arduino/arduino-cli/master/install.sh | BINDIR=/tool sh
ENV PATH $PATH:/tool/
RUN echo $PATH
RUN arduino-cli core update-index
RUN arduino-cli core install arduino:avr
RUN arduino-cli core list
RUN mkdir /hdd_synthe
WORKDIR /hdd_synthe
CMD ["/bin/sh"]

