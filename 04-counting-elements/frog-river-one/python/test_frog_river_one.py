import pytest

from frog_river_one import solution


@pytest.mark.parametrize("test_input1, test_input2, expected", [(5, [1, 3, 1, 4, 2, 3, 5, 4], 6)])
def test_solution(test_input1, test_input2, expected):
    result = solution(test_input1, test_input2)
    assert result == expected
