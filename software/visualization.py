import pandas as pd
import matplotlib.pyplot as plt

df = pd.read_csv("../data/sample_data.csv")

plt.figure(figsize=(8, 4))
plt.bar(df["Sample ID"].astype(str), df["Sensor Value"])
plt.xlabel("Sample ID")
plt.ylabel("Sensor Value")
plt.title("Sensor Readings by Sample")
plt.tight_layout()
plt.show()
