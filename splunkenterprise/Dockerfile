FROM centos:latest
RUN yum -y update

ENV SPLUNK_HOME /app/splunk

# ユーザーを作成
ARG SPLUNK_UID=10777
ARG SPLUNK_USER=splunk
ARG SPLUNK_PASSWORD=splunk
RUN useradd ${SPLUNK_USER} -u ${SPLUNK_UID} -m

# 作成したユーザーに切り替える
USER ${SPLUNK_USER}

#splunkインストール(ADDコマンドでtar展開)
ADD splunk-8.2.2.1-ae6821b7c64b-Linux-x86_64.tgz /app/

#Splunkの起動エラー対策
ADD splunk-launch.conf /app/splunk/etc/

USER root

#splunk初回実行
RUN /app/splunk/bin/splunk start --accept-license --answer-yes --seed-passwd changeme
#受信ポート設定
RUN /app/splunk/bin/splunk enable listen 9997
