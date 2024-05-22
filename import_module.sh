#!/bin/bash
export REPO="${HOME}/libmeta/"
export MODULES="${REPO}/modules/"
LIBDIR=./libraries

echo "Select the module to be imported without meta_ prefix"
ls --color=auto ${MODULES}
echo module_name:
read module_name

module_name="meta_${module_name}"
module_path=${MODULES}/${module_name}

cp -r ${module_path} ${LIBDIR}/${module_name} 2> /dev/null

if [ "$?" == 1 ]; then
    echo "Module not found (404)"
    else
    echo "${module_name} imported"
fi
