FROM ubuntu:22.04
RUN apt-get update && apt install -y build-essential gdb cmake unzip
COPY ../lib/opencv-4.7.0.zip /opt
WORKDIR /opt
RUN unzip opencv-4.7.0.zip
WORKDIR /opt/opencv-4.7.0/build
RUN cmake ..
RUN make -j4
RUN make install


ADD example-code /home/example-code
WORKDIR /home/example-code