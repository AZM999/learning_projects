import pandas as pd
import plotly.express as px

url = 'http://api.open-notify.org/iss-now.json'
# getting location and time by this api

df = pd.read_json(url)
print(df)
#arranging
df['latitude'] = df.loc['latitude','iss_position']
df['longitude'] = df.loc['longitude','iss_position']

df.reset_index(inplace = True)


df = df.drop(['index','message'], axis=1)
#plotting using plotly
fig = px.scatter_geo(df,lat='latitude',lon='longitude')

print(df)
fig.show()
