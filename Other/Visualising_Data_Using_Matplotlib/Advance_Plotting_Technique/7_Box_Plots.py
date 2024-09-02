import numpy as np
import matplotlib.pyplot as plt

# Generate some sample data
np.random.seed(42)
data = np.random.normal(100, 20, 200)

# Calculate the five-number summary
minimum = np.min(data)
q1 = np.percentile(data, 25)
median = np.median(data)
q3 = np.percentile(data, 75)
maximum = np.max(data)

# Create the box plot
fig, ax = plt.subplots(figsize=(6, 4))
bp = ax.boxplot([data], whis=[0, 100], showfliers=False)

# Add labels and title
ax.set_xlabel('Dataset')
ax.set_ylabel('Values')
ax.set_title('Simple Box Plot (Five-Number Summary)')

# Add annotations for each part of the box plot
ax.annotate('Maximum', xy=(1, maximum), xytext=(1.1, maximum),
            arrowprops=dict(facecolor='black', shrink=0.05))
ax.annotate('Third Quartile', xy=(1, q3), xytext=(1.1, q3),
            arrowprops=dict(facecolor='black', shrink=0.05))
ax.annotate('Median', xy=(1, median), xytext=(1.1, median),
            arrowprops=dict(facecolor='black', shrink=0.05))
ax.annotate('First Quartile', xy=(1, q1), xytext=(1.1, q1),
            arrowprops=dict(facecolor='black', shrink=0.05))
ax.annotate('Minimum', xy=(1, minimum), xytext=(1.1, minimum),
            arrowprops=dict(facecolor='black', shrink=0.05))

# Remove x-axis ticks
ax.set_xticks([])

plt.tight_layout()
plt.show()