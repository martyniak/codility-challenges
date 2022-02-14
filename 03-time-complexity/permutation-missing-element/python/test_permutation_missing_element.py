import unittest
import pytest

from .permutation_missing_element import solution

def test_solution_1():
    assert solution([2, 3, 1, 5]) == 4
