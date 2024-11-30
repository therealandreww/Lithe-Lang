FROM ubuntu:latest
WORKDIR /lithe
COPY . .

RUN apt update
RUN apt-get update
RUN apt-get -y install build-essential
RUN apt-get -y install make
RUN apt update
RUN apt-get update

CMD ["sh"]