/* 
 * $Id$ 
 *
 * MySQL module result related functions
 *
 * Copyright (C) 2001-2003 FhG Fokus
 * Copyright (C) 2007-2008 1&1 Internet AG
 *
 * This file is part of Kamailio, a free SIP server.
 *
 * Kamailio is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version
 *
 * Kamailio is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License 
 * along with this program; if not, write to the Free Software 
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

/*! \file
 *  \brief DB_MYSQL :: Result related functions
 *  \ingroup db_mysql
 *  Module: \ref db_mysql
 */


#ifndef KM_RES_H
#define KM_RES_H

#include "../../lib/srdb1/db_res.h"
#include "../../lib/srdb1/db_con.h"


/*!
 * \brief Fill the result structure with data from database
 * \param _h database connection
 * \param _r database result
 * \return 0 on success, negative on failure
 */
int db_mysql_convert_result(const db1_con_t* _h, db1_res_t* _r);


/*!
 * \brief Get and convert columns from a result
 * \param _h database connection
 * \param _r database result set
 * \return 0 on success, negative on failure
 */
int db_mysql_get_columns(const db1_con_t* _h, db1_res_t* _r);

#endif
