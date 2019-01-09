

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;


//¿ÎÌÃ´úÂë1
/*
struct Image{
	double quality;
	double freshness;
	double rating;
};

struct Params{
	double a;
	double b;
	double c;
};



double ComputeImageWeight(const Params& params, const Image& image){
	double weight = image.quality;
	weight -= image.freshness * params.a + params.b;
	weight += image.rating * params.c;
	return weight;
}

double ComputeQualityByWeight(const Params& params,
							  const Image& image,
							  double weight){
	double quality = weight;
	quality += image.freshness * params.a + params.b;
	quality -= image.rating * params.c;
	return quality;
}

*/

//¿ÎÌÃ´úÂë2
/*
struct Image{
	double quality;
	double freshness;
	double rating;
};

struct Params{
	double a;
	double b;
	double c;
};


class FunctionPart{
public:
	FunctionPart(char new_operation, double new_value){
		operation = new_operation;
		value = new_value;
	}

	double Apply(double source_value) const{
		if (operation == '+'){
			return source_value + value;
		}
		else{
			return source_value - value;
		}
	}

	void Invert(){
		if (operation == '+'){
			operation = '-';
		}
		else{
			operation = '+';
		}
	}
private:
	char operation;
	double value;
};
 

class Function{
public:
	void AddPart(char operation, double value){
		parts.push_back({ operation, value });
	}
	double Apply(double value) const{
		for (const FunctionPart& part : parts){
			value = part.Apply(value);
		}
		return value;
	}
	void Invert(){
		for (FunctionPart& part : parts){
			part.Invert();
		}
		reverse(begin(parts), end(parts));
	}

private:
	vector<FunctionPart> parts;

};


Function MakeWeightFunction(const Params& params, const Image& image){
	Function function;
	function.AddPart('-', image.freshness * params.a + params.b);
	function.AddPart('+', image.rating * params.c);
	return function;
}


double ComputeImageWeight(const Params& params, const Image& image){
	Function function = MakeWeightFunction(params,image);
	return function.Apply(image.quality);
}

double ComputeQualityByWeight(const Params& params,
	const Image& image,
	double weight){
	Function function = MakeWeightFunction(params, image);
	function.Invert();
	return function.Apply(weight);
}

*/

