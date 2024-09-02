import matplotlib.pyplot as plt
import numpy as np

np.random.seed(0)
class1 = np.random.normal(70, 10, 30)
class2 = np.random.normal(80, 5, 30)
class3 = np.random.normal(75, 8, 30)

plt.boxplot([class1, class2, class3], labels=['Class 1', 'Class 2', 'Class 3'])
plt.title('Distribution of Test Scores by Class')
plt.ylabel('Scores')
plt.show()  