# -*- coding: utf-8 -*-

from .. import common
from ..builder import buildShlib
from .builder import getTargetName

_MODULE_NAME = 'boot'
TARGET = getTargetName( _MODULE_NAME )

def build( _context ):
    buildShlib(
        _context,
        TARGET,
        {
            common.SOURCE_DIR : {
                common.FG : {
                    _MODULE_NAME : {
                        'boot.c',
                        'config.c',
                    },
                },
            },
        },
    )
