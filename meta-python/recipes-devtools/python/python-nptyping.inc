SUMMARY = "Type Hints for Numpy"
DESCRIPTION = "Type Hints for Numpy"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=39268f1dcbd69f9ef7db699f62f312c2"

PYPI_SRC_URI = "https://github.com/ramonhagenaars/nptyping/archive/v1.4.0.tar.gz"

SRC_URI[md5sum] = "eed30ee00c92daaebc10e4cec9c56c49"
SRC_URI[sha256sum] = "c20cc20e31fdb4bfade0f129fc144eb01f70ec08d788c8aef21c99643bcc92fd"

RDEPENDS_${PN} += " \
    ${PYTHON_PN}-numpy \
    ${PYTHON_PN}-typish \
"

inherit pypi