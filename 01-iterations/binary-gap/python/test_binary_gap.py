import pytest

from binary_gap import solution


@pytest.mark.parametrize("test_input, expected", [(6, 0), (9, 2), (15, 0), (20, 1), (32, 0), (529, 4), (561892, 3), (74901729, 4), (1376796946, 5)])
def test_solution(test_input, expected):
    result = solution(test_input)
    assert result == expected
