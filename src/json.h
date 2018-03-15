/*
 * Copyright (c) 2011 "Capensis" [http://www.capensis.com]
 *
 * This file is part of Canopsis.
 *
 * Canopsis is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Canopsis is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with Canopsis.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __CANONEB_JSON_H
#define __CANONEB_JSON_H

#include "jansson.h"

void n2a_nebstruct_service_check_data_update_json (
     json_t **pdata,
     const char *message,
     const char *field,
     int size,
     int cpt
);

int n2a_nebstruct_service_check_data_to_json (
     nebstruct_service_check_data *c,
     json_t **pdata,
     size_t *message_size
);

int n2a_nebstruct_host_check_data_to_json (char **buffer, nebstruct_host_check_data *c);
int n2a_nebstruct_acknowlegement_data_to_json (char **buffer, nebstruct_acknowledgement_data *c);
int n2a_nebstruct_downtime_data_to_json (char **buffer, nebstruct_downtime_data *c);
int n2a_nebstruct_comment_data_to_json (char **buffer, nebstruct_comment_data *c);

#endif /* __CANONEB_JSON_H */
