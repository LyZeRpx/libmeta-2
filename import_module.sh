#!/bin/bash
export REPO="./"
export MODULES="${HOME}/lib_workshop/libmeta/modules"
LIBDIR=./libraries
LDFLAGS='LDFLAGS = -L./libraries ${LDLIBS}'
LDLIBS="LDLIBS ="

sed  -i "20i${LDFLAGS}" ./Makefile
echo "Select the module to be imported without meta_ prefix"
ls --color=auto ${MODULES}
echo module_name:
read module_name

module_name="meta_${module_name}"
module_path=${MODULES}/${module_name}

cp -r ${module_path} ${LIBDIR}/${module_name} 2> /dev/null

if [ "$?" == 1 ]; then
    echo "Module not found (Skill Issue ???)"
    else
    echo "${module_name} imported"
fi

#adds libflag to your Makefile
STOCK=$LDLIBS
LDLIBS="$LDLIBS -l$module_name"
sed -i "s|$STOCK|$LDLIBS|g" Makefile
