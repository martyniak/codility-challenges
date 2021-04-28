import unittest
import pytest

from .tape_equilibrium import solution

def test_solution_1():
    assert solution([3, 1, 2, 4, 3]) == 1
