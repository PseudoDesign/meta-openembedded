inherit setuptools3
SUMMARY = "Video Latency Test using OpenCV and Numpy"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=7f994b0061ffbb4887e53de0a435b3ec"

SRC_URI[md5sum] = "618a6d70538cefbd39dd9c4455ee6fc4"
SRC_URI[sha256sum] = "e21617327d85b4ff21c186dc6a8003435d3e6642d8ca81e87aa4e74fbb88c111"

RDEPENDS_${PN} += " \
    opencv \
    python3-opencv \
    python3-numpy \
    python3-nptyping \
    python3-func-timeout \
"

inherit pypi