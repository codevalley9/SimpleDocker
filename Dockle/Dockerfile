FROM nginx:latest

RUN mkdir -p /app
COPY nginx/nginx.conf /etc/nginx/nginx.conf
COPY main.c /app/main.c
COPY run.sh /app/run.sh

# Установка необходимых пакетов
RUN apt-get update && \
    apt-get install -y gcc spawn-fcgi libfcgi-dev && \
    rm -rf /var/lib/apt/lists

RUN useradd -d /home/dockle -m -s /bin/bash dockle
RUN chown -R dockle:dockle /app && chmod -R 755 /app && \
        chown -R dockle:dockle /var/cache/nginx && \
        chown -R dockle:dockle /var/log/nginx && \
        chown -R dockle:dockle /etc/nginx/conf.d
RUN touch /var/run/nginx.pid && \
        chown -R dockle:dockle /var/run/nginx.pid

USER dockle

CMD ["bash", "/app/run.sh"]
