FROM ubuntu:22.04
RUN apt-get update && apt install -y build-essential && apt install -y gdb && apt install -y cmake
ADD example-code /home/example-code
WORKDIR /home/example-code
RUN g++ main.cpp -o main && ./main