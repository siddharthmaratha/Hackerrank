import numpy

NMP = map(int, raw_input().split())
N = numpy.array([raw_input().split() for i in range(NMP[0])], int)
M = numpy.array([raw_input().split() for i in range(NMP[1])], int)

print numpy.concatenate((N, M), axis = 0)