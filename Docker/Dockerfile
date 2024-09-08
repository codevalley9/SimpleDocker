FROM nginx:latest


COPY nginx/nginx.conf /etc/nginx/nginx.conf
COPY main.c /main.c
COPY run.sh /run.sh

# Установка необходимых пакетов
RUN apt-get update && \
    apt-get install -y gcc spawn-fcgi libfcgi-dev

CMD ["bash", "./run.sh"]