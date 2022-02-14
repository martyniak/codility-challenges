import pytest

from missing_integer import solution

@pytest.mark.parametrize("test_input, expected", [([1, 3, 6, 4, 1, 2], 5), ([1, 2, 3], 4), ([-1, -3], 1)])
def test_solution(test_input, expected):
    result = solution(test_input)
    assert result == expected
