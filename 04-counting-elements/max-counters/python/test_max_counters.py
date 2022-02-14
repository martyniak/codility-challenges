import unittest
import pytest

from .max_counters import solution

def test_solution_1():
    result = solution(5, [3, 4, 4, 6, 1, 4, 4])
    print(result)
