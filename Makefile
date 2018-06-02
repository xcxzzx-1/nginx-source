
default:	build

clean:
	rm -rf Makefile objs

build:
	$(MAKE) -f objs/Makefile

install:
	$(MAKE) -f objs/Makefile install

modules:
	$(MAKE) -f objs/Makefile modules

upgrade:
	/opt/nginx1/sbin/nginx -t

	kill -USR2 `cat /opt/nginx1/logs/nginx.pid`
	sleep 1
	test -f /opt/nginx1/logs/nginx.pid.oldbin

	kill -QUIT `cat /opt/nginx1/logs/nginx.pid.oldbin`
