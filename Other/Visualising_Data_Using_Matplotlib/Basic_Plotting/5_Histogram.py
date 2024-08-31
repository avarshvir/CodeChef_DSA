import numpy as np
import matplotlib.pyplot as plt

# Generate some sample exam scores
np.random.seed(0)
scores = np.random.normal(70, 10, 1000)  # Mean of 70, std dev of 10, 1000 students

plt.figure(figsize=(6, 4))
plt.hist(scores, bins=20, edgecolor='black')
plt.title('Distribution of Exam Scores')
plt.xlabel('Score')
plt.ylabel('Number of Students')
plt.grid(axis='y', alpha=0.75)

plt.show()