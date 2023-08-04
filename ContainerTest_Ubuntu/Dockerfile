FROM ubuntu:latest

# apt-get更新
RUN apt-get update

# gccインストール
RUN apt-get install -y build-essential

# CのソースとMakefileを転送
COPY Makefile /tmp
COPY test.c /tmp
COPY endian.c /tmp

# Cをコンパイル
WORKDIR /tmp
RUN make

