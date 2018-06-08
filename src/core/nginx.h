
/*
 * Copyright (C) Igor Sysoev
 * Copyright (C) Nginx, Inc.
 */


#ifndef _NGINX_H_INCLUDED_
#define _NGINX_H_INCLUDED_

//修改nginx版本号，禁止显示版本号
#define nginx_version      1012002
//#define NGINX_VERSION      "1.12.2"
#define NGINX_VERSION      "8.8.8"
#define NGINX_VER          "mine-nginx/" NGINX_VERSION

#ifdef NGX_BUILD
#define NGINX_VER_BUILD    NGINX_VER " (" NGX_BUILD ")"
#else
#define NGINX_VER_BUILD    NGINX_VER
#endif

#define NGINX_VAR          "NGINX"
#define NGX_OLDPID_EXT     ".oldbin"


#endif /* _NGINX_H_INCLUDED_ */
