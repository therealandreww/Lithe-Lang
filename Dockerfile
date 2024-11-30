FROM ubuntu:latest
WORKDIR /lithe
COPY . .

RUN apt update && apt install -y make cmake

RUN cmake .

ENTRYPOINT ["/bin/bash"]