FROM alpine:3.17

RUN apk update && apk upgrade && apk --no-cache add \
	mariadb \
	mariadb-client

COPY ./tools/configure.sh /tmp/configure.sh

ENTRYPOINT ["sh", "/tmp/configure.sh"]
