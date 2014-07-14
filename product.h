/*
 * Copyright (C) 2014 Irkutsk Diagnostic Center.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation; version 2.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef PRODUCT_H
#define PRODUCT_H

#define ORGANIZATION_FULL_NAME  "Irkutsk Diagnostic Center"
#define ORGANIZATION_DOMAIN     "dc.baikal.ru"

#define PRODUCT_FULL_NAME       "Virtual DICOM Printer"
#define PRODUCT_SHORT_NAME      "virtualdicomprinter" // lowercase, no spaces

#define PRODUCT_VERSION         0x000001
#define PRODUCT_VERSION_STR     "0.0.1"

#define PRODUCT_SITE_URL        "http://" ORGANIZATION_DOMAIN "/projects/" PRODUCT_SHORT_NAME "/"
#define PRODUCT_NAMESPACE       "ru.baikal.dc." PRODUCT_SHORT_NAME

#define SITE_UID_ROOT           "1.2.643.2.66"

#endif // PRODUCT_H