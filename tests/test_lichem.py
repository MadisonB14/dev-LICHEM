"""
Tests for LICHEM
"""

###################################################
#                                                 #
#   LICHEM: Layered Interacting CHEmical Models   #
#                                                 #
#        Symbiotic Computational Chemistry        #
#                                                 #
###################################################

import subprocess
import os

import pytest

# Dictionary keys are names of programs.
# Values are executable names.
qm_programs = {
    "Gaussian": "g09",
    "Psi4": "psi4",
    "NWChem": "nwchem",
}

mm_programs = {"TINKER": "analyze", "LAMMPS": "lammps"}

expected_results = {
    "Gaussian": {
        "HF": 0,
        "PBE0": 0,
        "CCSD": 0,
        "Frequencies": 0,
        "NEB": 0,
        "QSM TS": 0,
    },

}

# Make a list of programs to test. For each qm and mm
# program, we run 'which EXECUTABLE_NAME'. If found, the 
# program is added to the test list. If not, we do
# nothing - not added to test list.
test_programs = []

for k, v in {**mm_programs, **qm_programs}.items():
    try:
        g = subprocess.run(
            ["which", v],
            check=True,
            stdout=subprocess.DEVNULL,
            stderr=subprocess.DEVNULL,
        )
        test_programs.append(k)
    except subprocess.CalledProcessError:
        # Not installed - do not add to list
        pass

# If set up correctly, I think we could run every test with one function.
# This could change as we examine the tests.
# The outermost parametrize here loops over the calculations.
# This other two loop over QM and MM programs respectively.
@pytest.mark.parametrize("calculation", expected_results["Gaussian"].keys())
@pytest.mark.parametrize("qm", qm_programs.keys())
@pytest.mark.parametrize("mm", mm_programs.keys())
def test_run(qm, mm, calculation):
    if qm not in test_programs:
        pytest.skip(f"{qm} not found.")

    if mm not in test_programs:
        pytest.skip(f"{mm} not found.")

    folder = f"{qm}_{mm}"


    # os.chdir(folder)

    # print(folder)
    # Run calculation script
    # Test output

    # Clean files
    # Navigate out of foler
    # os.chdir("..")
