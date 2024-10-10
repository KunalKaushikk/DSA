#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <regex>
#include <algorithm>

std::string getPotentialDomains(const std::vector<std::string> &lines)
{
    std::set<std::string> domainSet;

    // Regex pattern to extract URLs
    std::regex urlPattern(R"(https?://(www\.|ww2\.|web\.)?([a-z0-9][-a-z0-9](\.[a-z0-9][-a-z0-9])(\.[a-z]{2,})?)(/[^ ]*)?)");
    std::smatch match;

    for (const auto &line : lines)
    {
        std::string::const_iterator searchStart(line.cbegin());
        while (std::regex_search(searchStart, line.cend(), match, urlPattern))
        {
            // Extract domain without prefix
            std::string domain = match[3].str();
            domainSet.insert(domain);
            searchStart = match.suffix().first; // Move past the last match
        }
    }

    // Create a sorted list of unique domains
    std::vector<std::string> sortedDomains(domainSet.begin(), domainSet.end());
    std::sort(sortedDomains.begin(), sortedDomains.end());

    // Join the sorted domains into a semicolon-separated string
    std::string result;
    for (const auto &domain : sortedDomains)
    {
        if (!result.empty())
        {
            result += ';';
        }
        result += domain;
    }

    return result;
}

int main()
{
    std::vector<std::string> lines = {
        "[\"Train (noun)\"](http://www.askoxford.com/concise_oed/train?view-uk). (definition Compact OED). Oxford University Press.",
        "Retrieved 2008-03-18.",
        "Hello",
        "World",
        "C is a programming language.",
        "Atchison, Topeka and Santa Fe Railway (1948). Rules: Operating Department. p. 7.",
        "[Hydrogen trains](http://www.hydrogencarsnow.com/blog2/index.php/hydrogen-vehicles/i-hear-the-hydrogen-train-a-comin-its-rolling-round-the-bend/)",
        "[Vehicle Projects Inc. Fuel cell locomotive](http://www.bnsf.com/media/news/articles/2008/01/2008-01-09a.html)",
        "Central Japan Railway (2006). Central Japan Railway Data Book 2006. p. 16.",
        "[\"Overview of the existing Mumbai Suburban Railway\"](http://web.archive.org/web/20080620033027/http://www.mrvc.indianrail.gov.in/overview.htm). Official webpage of Mumbai Railway Vikas Corporation. Archived from [the original](http://www.mrvc.indianrail.gov.in/overview.htm) on 2008-06-20."};

    std::string output = getPotentialDomains(lines);
    std::cout << output << std::endl;

    return 0;
}