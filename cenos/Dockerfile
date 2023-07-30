FROM quay.io/centos/centos:stream8

RUN yum update -y
RUN yum install -y svn mod_dav_svn glibc-langpack-ja httpd

ENV LANG ja_JP.utf8

RUN svnadmin create /opt/svn

# ユーザ作成
RUN useradd mastNAC -u 10777 -m

USER root
