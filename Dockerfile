FROM ubuntu:latest
WORKDIR /lithe
COPY . .

RUN apt update && apt install -y make cmake

ENTRYPOINT ["/bin/bash"]