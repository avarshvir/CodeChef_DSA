"""Scatter plots
Scatter plots display individual data points without connecting lines.
They are useful for showing the relationship between two variables."""

import matplotlib.pyplot as plt
import numpy as np

# Generate random data
np.random.seed(0)
x = np.random.rand(100) * 10  # 100 random values between 0 and 10
noise = np.random.randn(100)  # random noise
y = x + noise  # y = x + random noise

plt.figure(figsize=(6, 4))
plt.scatter(x, y, color='blue', alpha=0.5)
plt.title('Scatter Plot of x vs. y with Random Noise')
plt.xlabel('X-axis')
plt.ylabel('Y-axis')
plt.grid(True)
plt.show()
