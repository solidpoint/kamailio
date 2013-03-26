#!/bin/bash

# System Requirements:
# sudo apt-get install bison flex libjansson-dev libevent-dev libxml2-dev libpcre3-dev libpq-dev pkg-config

export CC_EXTRA_OPTS="-g -O0" ; echo -e "\n\n\n\nWARNING: OPTIMIZATION IS TURNED OFF!\nDo not use in production.\n\n\n\n"

export INCLUDED_MODULES="siputils xmlrpc json jsonrpc-c"
export INCLUDED_GROUPS="kstandard postgres"
export EXTRA_EXCLUDED_MODULES="mi_xmlrpc cpl mangler jabber mysql cpl-c auth_radius misc_radius avp_radius uri_radius acc_radius presence_b2b xcap osp tls oracle unixsock dbg print_lib auth_identity ldap db_berkeley db_oracle db_unixodbc perl perlvdb purple xmpp peering lcr utils presence presence_mwi presence_dialoginfo presence_xml pua pua_bla pua_dialoginfo pua_usrloc pua_xmpp xcap_client xcap_server presence_conference h350 bdb dbtext iptrtpproxy pa rls app_lua app_python xmlops"


make FLAVOUR=kamailio cfg MEMDBG=1 \
            include_modules="$INCLUDED_MODULES" \
            skip_modules="$EXCLUDED_MODULES $EXTRA_EXCLUDED_MODULES" \
            group_include="$INCLUDED_GROUPS" \
            CC_EXTRA_OPTS="$CC_EXTRA_OPTS"
make
make modules modules_k modules_s
