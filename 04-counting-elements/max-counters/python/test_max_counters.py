import pytest

from max_counters import solution


@pytest.mark.parametrize("test_input1, test_input2, expected", [(5, [3, 4, 4, 6, 1, 4, 4], [3, 2, 2, 4, 2])])
def test_solution(test_input1, test_input2, expected):
    result = solution(test_input1, test_input2)
    assert result == expected
