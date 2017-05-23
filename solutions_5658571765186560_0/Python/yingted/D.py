#!/usr/bin/env python
import re
_output = '''
found 6 3-ominoes
3 cells 1 x 3 1 unused
3 cells 1 x 6 1 unused
3 cells 1 x 9 1 unused
3 cells 1 x 12 1 unused
3 cells 1 x 15 1 unused
3 cells 1 x 18 1 unused
3 cells 2 x 3 0 unused
3 cells 2 x 6 0 unused
3 cells 2 x 9 0 unused
3 cells 2 x 12 0 unused
3 cells 2 x 15 0 unused
3 cells 2 x 18 0 unused
3 cells 3 x 3 0 unused
3 cells 3 x 4 0 unused
3 cells 3 x 5 0 unused
3 cells 3 x 6 0 unused
3 cells 3 x 7 0 unused
3 cells 3 x 8 0 unused
3 cells 3 x 9 0 unused
3 cells 3 x 10 0 unused
3 cells 3 x 11 0 unused
3 cells 3 x 12 0 unused
3 cells 3 x 13 0 unused
3 cells 3 x 14 0 unused
3 cells 3 x 15 0 unused
3 cells 3 x 16 0 unused
3 cells 3 x 17 0 unused
3 cells 3 x 18 0 unused
3 cells 3 x 19 0 unused
3 cells 3 x 20 0 unused
3 cells 4 x 6 0 unused
3 cells 4 x 9 0 unused
3 cells 4 x 12 0 unused
3 cells 4 x 15 0 unused
3 cells 4 x 18 0 unused
3 cells 5 x 6 0 unused
3 cells 5 x 9 0 unused
3 cells 5 x 12 0 unused
3 cells 5 x 15 0 unused
3 cells 5 x 18 0 unused
3 cells 6 x 6 0 unused
3 cells 6 x 7 0 unused
3 cells 6 x 8 0 unused
3 cells 6 x 9 0 unused
3 cells 6 x 10 0 unused
3 cells 6 x 11 0 unused
3 cells 6 x 12 0 unused
3 cells 6 x 13 0 unused
3 cells 6 x 14 0 unused
3 cells 6 x 15 0 unused
3 cells 6 x 16 0 unused
3 cells 6 x 17 0 unused
3 cells 6 x 18 0 unused
3 cells 6 x 19 0 unused
3 cells 6 x 20 0 unused
3 cells 7 x 9 0 unused
3 cells 7 x 12 0 unused
3 cells 7 x 15 0 unused
3 cells 7 x 18 0 unused
3 cells 8 x 9 0 unused
3 cells 8 x 12 0 unused
3 cells 8 x 15 0 unused
3 cells 8 x 18 0 unused
3 cells 9 x 9 0 unused
3 cells 9 x 10 0 unused
3 cells 9 x 11 0 unused
3 cells 9 x 12 0 unused
3 cells 9 x 13 0 unused
3 cells 9 x 14 0 unused
3 cells 9 x 15 0 unused
3 cells 9 x 16 0 unused
3 cells 9 x 17 0 unused
3 cells 9 x 18 0 unused
3 cells 9 x 19 0 unused
3 cells 9 x 20 0 unused
3 cells 10 x 12 0 unused
3 cells 10 x 15 0 unused
3 cells 10 x 18 0 unused
3 cells 11 x 12 0 unused
3 cells 11 x 15 0 unused
3 cells 11 x 18 0 unused
3 cells 12 x 12 0 unused
3 cells 12 x 13 0 unused
3 cells 12 x 14 0 unused
3 cells 12 x 15 0 unused
3 cells 12 x 16 0 unused
3 cells 12 x 17 0 unused
3 cells 12 x 18 0 unused
3 cells 12 x 19 0 unused
3 cells 12 x 20 0 unused
3 cells 13 x 15 0 unused
3 cells 13 x 18 0 unused
3 cells 14 x 15 0 unused
3 cells 14 x 18 0 unused
3 cells 15 x 15 0 unused
3 cells 15 x 16 0 unused
3 cells 15 x 17 0 unused
3 cells 15 x 18 0 unused
3 cells 15 x 19 0 unused
3 cells 15 x 20 0 unused
3 cells 16 x 18 0 unused
3 cells 17 x 18 0 unused
3 cells 18 x 18 0 unused
3 cells 18 x 19 0 unused
3 cells 18 x 20 0 unused
found 19 4-ominoes
4 cells 1 x 4 4 unused
4 cells 1 x 8 4 unused
4 cells 1 x 12 4 unused
4 cells 1 x 16 4 unused
4 cells 1 x 20 4 unused
4 cells 2 x 2 4 unused
4 cells 2 x 4 2 unused
4 cells 2 x 6 2 unused
4 cells 2 x 8 2 unused
4 cells 2 x 10 2 unused
4 cells 2 x 12 2 unused
4 cells 2 x 14 2 unused
4 cells 2 x 16 2 unused
4 cells 2 x 18 2 unused
4 cells 2 x 20 2 unused
4 cells 3 x 4 0 unused
4 cells 3 x 8 0 unused
4 cells 3 x 12 0 unused
4 cells 3 x 16 0 unused
4 cells 3 x 20 0 unused
4 cells 4 x 4 0 unused
4 cells 4 x 5 0 unused
4 cells 4 x 6 0 unused
4 cells 4 x 7 0 unused
4 cells 4 x 8 0 unused
4 cells 4 x 9 0 unused
4 cells 4 x 10 0 unused
4 cells 4 x 11 0 unused
4 cells 4 x 12 0 unused
4 cells 4 x 13 0 unused
4 cells 4 x 14 0 unused
4 cells 4 x 15 0 unused
4 cells 4 x 16 0 unused
4 cells 4 x 17 0 unused
4 cells 4 x 18 0 unused
4 cells 4 x 19 0 unused
4 cells 4 x 20 0 unused
4 cells 5 x 8 0 unused
4 cells 5 x 12 0 unused
4 cells 5 x 16 0 unused
4 cells 5 x 20 0 unused
4 cells 6 x 6 0 unused
4 cells 6 x 8 0 unused
4 cells 6 x 10 0 unused
4 cells 6 x 12 0 unused
4 cells 6 x 14 0 unused
4 cells 6 x 16 0 unused
4 cells 6 x 18 0 unused
4 cells 6 x 20 0 unused
4 cells 7 x 8 0 unused
4 cells 7 x 12 0 unused
4 cells 7 x 16 0 unused
4 cells 7 x 20 0 unused
4 cells 8 x 8 0 unused
4 cells 8 x 9 0 unused
4 cells 8 x 10 0 unused
4 cells 8 x 11 0 unused
4 cells 8 x 12 0 unused
4 cells 8 x 13 0 unused
4 cells 8 x 14 0 unused
4 cells 8 x 15 0 unused
4 cells 8 x 16 0 unused
4 cells 8 x 17 0 unused
4 cells 8 x 18 0 unused
4 cells 8 x 19 0 unused
4 cells 8 x 20 0 unused
4 cells 9 x 12 0 unused
4 cells 9 x 16 0 unused
4 cells 9 x 20 0 unused
4 cells 10 x 10 0 unused
4 cells 10 x 12 0 unused
4 cells 10 x 14 0 unused
4 cells 10 x 16 0 unused
4 cells 10 x 18 0 unused
4 cells 10 x 20 0 unused
4 cells 11 x 12 0 unused
4 cells 11 x 16 0 unused
4 cells 11 x 20 0 unused
4 cells 12 x 12 0 unused
4 cells 12 x 13 0 unused
4 cells 12 x 14 0 unused
4 cells 12 x 15 0 unused
4 cells 12 x 16 0 unused
4 cells 12 x 17 0 unused
4 cells 12 x 18 0 unused
4 cells 12 x 19 0 unused
4 cells 12 x 20 0 unused
4 cells 13 x 16 0 unused
4 cells 13 x 20 0 unused
4 cells 14 x 14 0 unused
4 cells 14 x 16 0 unused
4 cells 14 x 18 0 unused
4 cells 14 x 20 0 unused
4 cells 15 x 16 0 unused
4 cells 15 x 20 0 unused
4 cells 16 x 16 0 unused
4 cells 16 x 17 0 unused
4 cells 16 x 18 0 unused
4 cells 16 x 19 0 unused
4 cells 16 x 20 0 unused
4 cells 17 x 20 0 unused
4 cells 18 x 18 0 unused
4 cells 18 x 20 0 unused
4 cells 19 x 20 0 unused
4 cells 20 x 20 0 unused
found 63 5-ominoes
5 cells 1 x 5 11 unused
5 cells 1 x 10 11 unused
5 cells 1 x 15 11 unused
5 cells 1 x 20 11 unused
5 cells 2 x 5 9 unused
5 cells 2 x 10 7 unused
5 cells 2 x 15 7 unused
5 cells 2 x 20 7 unused
5 cells 3 x 5 1 unused
5 cells 3 x 10 0 unused
5 cells 3 x 15 0 unused
5 cells 3 x 20 0 unused
5 cells 4 x 5 0 unused
5 cells 4 x 10 0 unused
5 cells 4 x 15 0 unused
5 cells 4 x 20 0 unused
5 cells 5 x 5 0 unused
5 cells 5 x 6 0 unused
5 cells 5 x 7 0 unused
5 cells 5 x 8 0 unused
5 cells 5 x 9 0 unused
5 cells 5 x 10 0 unused
5 cells 5 x 11 0 unused
5 cells 5 x 12 0 unused
5 cells 5 x 13 0 unused
5 cells 5 x 14 0 unused
5 cells 5 x 15 0 unused
5 cells 5 x 16 0 unused
5 cells 5 x 17 0 unused
5 cells 5 x 18 0 unused
5 cells 5 x 19 0 unused
5 cells 5 x 20 0 unused
5 cells 6 x 10 0 unused
5 cells 6 x 15 0 unused
5 cells 6 x 20 0 unused
5 cells 7 x 10 0 unused
5 cells 7 x 15 0 unused
5 cells 7 x 20 0 unused
5 cells 8 x 10 0 unused
5 cells 8 x 15 0 unused
5 cells 8 x 20 0 unused
5 cells 9 x 10 0 unused
5 cells 9 x 15 0 unused
5 cells 9 x 20 0 unused
5 cells 10 x 10 0 unused
5 cells 10 x 11 0 unused
5 cells 10 x 12 0 unused
5 cells 10 x 13 0 unused
5 cells 10 x 14 0 unused
5 cells 10 x 15 0 unused
5 cells 10 x 16 0 unused
5 cells 10 x 17 0 unused
5 cells 10 x 18 0 unused
5 cells 10 x 19 0 unused
5 cells 10 x 20 0 unused
5 cells 11 x 15 0 unused
5 cells 11 x 20 0 unused
5 cells 12 x 15 0 unused
5 cells 12 x 20 0 unused
5 cells 13 x 15 0 unused
5 cells 13 x 20 0 unused
5 cells 14 x 15 0 unused
5 cells 14 x 20 0 unused
5 cells 15 x 15 0 unused
5 cells 15 x 16 0 unused
5 cells 15 x 17 0 unused
5 cells 15 x 18 0 unused
5 cells 15 x 19 0 unused
5 cells 15 x 20 0 unused
5 cells 16 x 20 0 unused
5 cells 17 x 20 0 unused
'''
def _init():
	global unusable
	unusable = {}
	pat = re.compile(r'^([0-9]+) cells ([0-9]+) x ([0-9]+) ([0-9]+) unused$', re.M)
	for m in pat.finditer(_output):
		x, r, c, u = map(int, m.groups())
		unusable[x, r, c] = u
_init()
def has_unusable(x, r, c):
	if x >= 7:
		return True
	if x <= 1:
		return False
	if (r * c) % x != 0:
		return True
	if x == 2:
		return False
	if r > c:
		r, c = c, r
	return unusable[x, r, c]
def main():
	for t in xrange(1, 1 + int(raw_input())):
		print 'Case #%d:' % t,
		x, r, c = map(int, raw_input().split())
		print 'RICHARD' if has_unusable(x, r, c) else 'GABRIEL'
if __name__ == '__main__':
	main()