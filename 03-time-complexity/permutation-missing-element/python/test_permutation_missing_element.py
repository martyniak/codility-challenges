import pytest

from permutation_missing_element import solution


@pytest.mark.parametrize("test_input, expected", [([2, 3, 1, 5], 4)])
def test_solution(test_input, expected):
    result = solution(test_input)
    assert result == expected
