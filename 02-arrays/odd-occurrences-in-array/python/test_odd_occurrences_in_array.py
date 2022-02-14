import unittest
import pytest

from .odd_occurrences_in_array import solution

def test_solution_1():
    assert solution([9]) == 9

def test_solution_7():
    assert solution([9, 3, 9, 3, 9, 7, 9]) == 7
