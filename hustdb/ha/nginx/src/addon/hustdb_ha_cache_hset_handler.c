#include "hustdb_ha_write_handler.h"

ngx_int_t hustdb_ha_cache_hset_handler(ngx_str_t * backend_uri, ngx_http_request_t *r)
{
    return hustdb_ha_write_cache_handler(hustdb_ha_has_tb, backend_uri, r);
}
