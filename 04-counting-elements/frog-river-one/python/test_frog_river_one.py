import unittest
import pytest

from .frog_river_one import solution

def test_solution_1():
    result = solution(5, [1, 3, 1, 4, 2, 3, 5, 4])
    assert result == 6
