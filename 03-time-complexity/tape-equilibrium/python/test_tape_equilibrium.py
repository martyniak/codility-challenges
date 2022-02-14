import pytest

from tape_equilibrium import solution


@pytest.mark.parametrize("test_input, expected", [([3, 1, 2, 4, 3], 1)])
def test_solution(test_input, expected):
    result = solution(test_input)
    assert result == expected
