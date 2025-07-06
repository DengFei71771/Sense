from setuptools import find_packages
from setuptools import setup

setup(
    name='sensebeetle_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('sensebeetle_interfaces', 'sensebeetle_interfaces.*')),
)
