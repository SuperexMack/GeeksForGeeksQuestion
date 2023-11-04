public:
pair<long, long> indexes(vector<long long> v, long long x)
{
    // code here

    long long a = -1; // last occurance
    long long b = -1; // first occurance

    for (int i = 0; i < v.size(); i++)
    {

        if (v[i] == x)
        {

            if (b == -1)
            {

                b = i;
            }

            if (b != -1)
            {

                a = i;
            }
        }
    }

    if (a == -1 || b == -1)
    {

        return {-1, -1};
    }

    if (a == -1 && b == -1)
    {

        return {-1, -1};
    }

    else
    {

        return {b, a};
    }
}