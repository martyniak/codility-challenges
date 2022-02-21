import pytest

from passing_cars import solution


@pytest.mark.parametrize("test_input, expected", [([0, 1, 0, 1, 1], 5)])
def test_solution(test_input, expected):
    result = solution(test_input)
    assert result == expected
