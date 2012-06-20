#!/bin/sh

# latest is http://www.unicode.org/Public/UNIDATA/Blocks.txt

PROGNAME=`basename $0 .sh`
HEADER='/* vim:set et sts=4: */
/* input-pad - The input pad
 * Copyright (C) 2010-2012 Takao Fujiwara <takao.fujiwara1@gmail.com>
 * Copyright (C) 2010-2012 Red Hat, Inc.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA  02110-1301  USA
 */
/* This file is generated by unicode_block.sh */

#ifndef __INPUT_PAD_UNICODE_BLOCK_H__
#define __INPUT_PAD_UNICODE_BLOCK_H__

#include "i18n.h"

typedef struct _InputPadUnicodeBlockTable InputPadUnicodeBlockTable;

struct _InputPadUnicodeBlockTable {
    unsigned int        start;
    unsigned int        end;
    const char         *label;
};

static const InputPadUnicodeBlockTable input_pad_unicode_block_table[] = {'

FOOTER='    { 0, 0, NULL}
};

#endif
'

usage ()
{
    printf "usage: %s Blocks.txt\n" $PROGNAME
}

if [ $# -lt 1 ] ; then
    usage
    exit -1
fi

FILE=$1

printf "%s\n" "$HEADER"
cat $FILE | grep -v "^#" | grep -v '^$' | while read line
do
    BLOCK=`echo "$line" | awk -F';' '{print $1}'`
    LABEL=`echo "$line" | awk -F';' '{print $2}'`
    START=`echo "$BLOCK" | sed -e 's|\([^\.]*\)\.\.\([^\.]*\)|\1|'`
    END=`echo "$BLOCK" | sed -e 's|\([^\.]*\)\.\.\([^\.]*\)|\2|'`
    LABEL=`echo "$LABEL" | sed -e 's|^ ||'`
    printf "%s\n" "    {0x$START, 0x$END, N_(\"$LABEL\")},"
done

printf "%s\n" "$FOOTER"
