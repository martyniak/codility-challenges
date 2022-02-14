import pytest

from perm_check import solution

@pytest.mark.parametrize("test_input, expected", [([4, 1, 3, 2], 1), ([4, 1, 3], 0), ([1, 1], 0), ([4, 1, 3, 2, 1], 0)])
def test_solution(test_input, expected):
    result = solution(test_input)
    assert result == expected
