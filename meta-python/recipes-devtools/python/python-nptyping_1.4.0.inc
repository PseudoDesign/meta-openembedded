SUMMARY = "Type Hints for Numpy"
DESCRIPTION = "Type Hints for Numpy"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://recipe-sysroot/usr/lib/python3.7/LICENSE.txt;md5=39268f1dcbd69f9ef7db699f62f312c2"

SRC_URI[md5sum] = "06292d764a50cfe43bf3f868bdee0da1"
SRC_URI[sha256sum] = "dada081b24cd922bbfb0a862e72104d811699fd9f8c9b7bea464fb933dc491a3"

PYPI_PACKAGE = "nptyping"
PYPI_PACKAGE_EXT = "whl"

RDEPENDS_${PN} += " \
    ${PYTHON_PN}-numpy \
    ${PYTHON_PN}-typish \
"
