import unittest
import pytest

from binary_gap import solution

def test_solution_6():
    assert solution(6) == 0

def test_solution_9():
    assert solution(9) == 2

def test_solution_15():
    assert solution(15) == 0

def test_solution_20():
    assert solution(20) == 1

def test_solution_32():
    assert solution(32) == 0

def test_solution_529():
    assert solution(529) == 4

def test_solution_561892():
    assert solution(561892) == 3

def test_solution_74901729():
    assert solution(74901729) == 4

def test_solution_1376796946():
    assert solution(1376796946) == 5
